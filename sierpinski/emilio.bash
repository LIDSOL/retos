#!/bin/bash

# Recibe dos valores, el ancho y alto de la terminal y dibuja el triangulo más
# grande que es posible representar

# $ ./emilio.bash $COLUMNS $LINES

min() {
    # Devuelve el menor de dos números proporcionados
    [ $1 -lt $2 ] && echo $1 || echo $2
}

sierpinski() {
    # Recibe la longitud de la base del triangulo y lo dibuja
    for (( y=$1-1; y>=0 ; y-- )); do
        for (( x=0 ; x<y ; x++ )); do printf ' '; done # padding de espacio
        for (( x=0 ; x+y<$1 ; x++ )); do
            [ $(( $x & $y )) -ne 0 ] && printf '  ' || printf '* '
        done
        printf '\n'
    done
}

nearest2pow() {
    # Devuelve la potencia de 2 más cercana y menor o igual a un número
    p=1
    while [ $p -le $1 ]; do p=$(($p<<1)); done
    echo $(($p>>1))
}

sierpinski $(nearest2pow $(min $1 $2))
