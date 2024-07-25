//Nombre: SaulPeraltaPerez157
//Origen: Facultad de Ingeniería, UNAM.
//Contacto: saulperalta01@gmail.com
//Instrucciones de ejecución:
// - Compilar con g++
// - Ejecutar el programa ./<nombre del ejecutable> <parámetro númerico>
//Explicación de la solución:
// - Se utiliza un mapa en la serie de Fibonacci para un mejor desempeño.
// - La función llamada fib es recursiva.
// - Se utilizan iteradores para recorrer los vectores y los mapas.
// - Se utiliza la función count para verificar existencia de elementos.
// - Aspectos a mejorar: Calcular los términos necesarios para el parámetro dado para no calcular términos de más,
//   implementar busqueda binaria en el vector isFib ya que la función count recorre todo el vector cuando no es necesario.

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

//Función que calcula los n términos de la serie de Fibonacci.
int fib(int n, map<int, int>& visited){ //Se utiliza un mapa para mejorar la eficiencia de la función.
  if(visited.count(n) > 0){
    return visited[n]; //En ciertos cálculos de los términos es posible que se usen términos que ya han sido calculados.
  }
  else{
    int res = fib(n - 2, visited) + fib(n - 1, visited); //Ingresar el nuevo término calculado para un posterior uso.
    visited[n] = res;
    return res;
  }
}

//Función que verifica si es primo, Fibonacci o ambos.
void verify(int n, vector<int>& isPrim, vector<int>& isFib){
  int begin = 2; //Empezar a verificar con el número dos.
  bool flag;
  cout << "1 Fibonacci \n"; //El número uno se toma como caso base.
  while(begin <= n){
    flag = true;
    for(int i = 0; i < isPrim.size(); i++){ //la lista llamada isPrim ayuda a verificar si un número es primo o no.
      if((begin%isPrim.at(i) == 0)){
	flag = false; //Si un número llega a ser divisible por alguno de los primos presentes en la lista, ese número no es primo.
      }
    }
    cout << begin;
    if(flag == true){ //Verificando si es primo para ingresarlo a la lista de los número primos encontrados.
      cout << " Primo ";
      isPrim.push_back(begin);
    }
    if(count(isFib.begin(), isFib.end(), begin) != 0){ //Verificando en la lista isFib si existe el número que esta siendo verificado.
      cout << " Fibonacci ";
    }
    cout << "\n";
    begin++; //Continuar con el siguiente número.
  }
}

//Función principal
int main(int argc, char* argv[]){
  if(argc == 1){ //Verificando que se ingresen más argumentos.
    cout << "Ingresa el primer parametro como un numero \n";
    return 0;
  }
  //Convirtirndo el segundo argumento a entero.
  int n;
  stringstream ss(argv[1]);
  ss >> n;
  //Creando el mapa para usar en el calculo de la serie de Fibonacci guardando el número del término y el término.
  map<int, int> visited;
  //Creando una lista que solo contiene los términos de la serie de Fibonacci.
  vector<int> isFib;
  //Creando una lista que guarda los números primos encontrados, para encontrar otros.
  vector<int> isPrim;
  //Primeros dos términos de la serie de Fibonacci.
  visited[1] = 0;
  visited[2] = 1;
  //Por convencion se calculan 100000 términos.
  fib(100000, visited);
  //Extraer los términos menores al número que se ingreso como parámetro.
  map<int, int>::iterator it;
  for(it = visited.begin(); it != visited.end(); it++){
    if(it->second > n){
      break;
    }
    isFib.push_back(it->second);
  }
  //Empezar a verificar.
  verify(n, isPrim, isFib);
  return 0;
}
