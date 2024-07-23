# Retos del LIDSoL

¡Bienvenido, usuari@!

Este repositorio contiene un conjunto de retos propuestos por el Laboratorio de Investigación y Desarrollo de Software Libre (LIDSoL).

Los ganadores de los retos aquí publicados serán reconocidos en nuestras redes. En caso de eventos especiales puede haber premios :D

¿Qué esperas para participar?


## Retos

Los retos se publican en un directorio con el formato de nombre:

```
AA-MM-DD-NombreDeReto
```

Dentro del directorio encontrarás un README con las explicaciones del reto.

### Entrega de soluciones

Para hacer entrega de tu solución deberás:

1. Tener en tu cuenta un fork de este repositorio.
2. Dentro de tu fork, subir tu solución dentro del directorio del reto, nombrando al archivo de solución con tu nombre de usuario de Git, la extensión es opcional. En caso de ser multiples archivos genera un directorio con tu nombre de usuario.
3. Generar un pull request con este repositorio. No te preocupes si ves que tardamos en realizar el merge, tomaremos en cuenta la hora que se realizó el pull request.

### Notas

- La selección del lenguaje es libre
- No se aceptaran binarios, solamente código fuente
- El uso de bibliotecas de terceros esta sujeto a revisión, evita usarlas
- Las entregas requieren tener un encabezado como comentario, este debe contener:

```
Nombre: <Tu nombre de usuario>
Origen: <Si eres de la FI, UNAM o externo>
Contacto: <Correo electrónico, Github, GitLab, Página web, Twitter, Instagram, Facebook, etc.> (opcional)
Instrucciones de ejecución:
Explicación de solución: (Opcional)
```

- En caso de contener varios archivos, el header puede se guardado en un archivo README.md
- Se tomará en cuenta el primer pull request con una solución correcta. Para desempate se tomará en cuenta tiempo de ejecución, uso de memoria y claridad de código

#### Ejemplo de entrega

En este ejemplo el reto es un 'hola mundo' publicado el 01-01-2000

Estructura de archivos de entregas
```
00-01-01-HolaMundo
├── usuario-01
│   ├── main.c
│   ├── main.h
│   └── README.md
└── usuario-02.c
```

Contenido de entrega `usuario-02.c`:
```
// Nombre: usuario-02
// Origen: FI
// Contacto: @usuario-02[Github]
// Instrucciones de ejecución: Compila este archivo y ejecuta con gcc
// - gcc usuario-02.c
// - ./a.out
// Explicación de solución: Un programa que imprime un hola mundo

#include <stdio.h>

int main(){
    printf("Hola mundo\n");
    return 0;
}
```

## Ganadores y premios

Los ganadores serán mencionados en nuestras redes sociales. En caso de que el reto tenga un premio nos contactaremos contigo en las próximas 24 horas, si no recibes contacto de nuestra parte, mándanos un correo.

## Aclaraciones y sugerencias

Si tienes algún problema, duda o sugerencia de reto puedes contactarnos abriendo un issue en este repositorio o mediante el correo: lidsol-info@proton.me

¡Esperamos que disfrutes estos retos!
