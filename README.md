# BFS-JAMBAO 馃馃嵑
_printf("Mucha Cumbia");._
### Proceso de Instalaci贸n: 馃敡

_Para empezar con el proyecto se procede a instalar un editor de c贸digo con el que debemos trabajar el programa, una buena opci贸n es Visual Studio Code._
 _Otra alternativa si es que el usuario no cuenta con los recursos necesarios para ejecutar los algoritmos, ya sea por falta de espacio en la memoria RAM o se tiene instalado un procesador no satisfactorio, es que utilice compilador online, este utiliza los recursos de la nube para correr los programas._
_Crear una carpeta en donde guardaremos el c贸digo trabajado, se recomienda fabricarlo en un lugar f谩cil de recordar, ya que es muy com煤n perder la ubicaci贸n de esta._   
_Despu茅s de realizar todos los pasos, procedemos a crear un repositorio en la p谩gina GitHub. Primero creamos una cuenta, o si ya se cuenta con una, ingresamos nuestro usuario; seguido a esto, en la pantalla de inicio nos dirigimos a nuestros repositorios en la barra de navegaci贸n, seleccione Create new (+) y luego elija "New repository"._
_En la p谩gina Create a new repository (Crear un nuevo repositorio), haga lo siguiente:_
_En el cuadro Repository name (Nombre del repositorio), indique el nombre apropiado para el repositorio._
_Seleccione Public._
_Algo Importante:_
_Si se selecciona la opci贸n Public (P煤blica) predeterminada, cualquiera podr谩 ver este repositorio. Puede seleccionar la opci贸n Private (Privado) para limitar qui茅n puede ver el repositorio y confirmarlo(esto no es gratis)._
_Active la casilla de verificaci贸n "Initialize this repository with a README鈥? (Inicializar este repositorio con un archivo README). Este archivo README.md permite que podamos escribir como una portada o carta de presentaci贸n de nuestra p谩gina en github, cada persona puede personalizarlo de la manera que cada uno prefiera agregando im谩genes, dividiendo en carpetas los archivos que subamos, as铆 para tener todo ordenado y clasificado, tambi茅n podemos editar esto desde nuestro editor de texto favorito 鈥淰scode鈥?. Elija "Create repository" crear repositorio._ 
_鈥淎lgo interesante:鈥漘
_Ahora con nuestro repositorio creado y personalizado tenemos que clonarlo para poder realizar el proceso de conectar nuestro Visual Studio Code con nuestro repositorio en Github, as铆 podremos usar con diferentes comandos en la terminal para subir nuestros proyectos directamente desde vsual studio code y lo guardamos en nuestro repositorio._

![image](https://user-images.githubusercontent.com/80688833/118200997-7df59180-b424-11eb-9ffe-4e52028457cf.png)

## Definici贸n del Problema: :hamburger: 

_Para nuestro proyecto escogimos el algoritmo BFS (en ingl茅s es Breadth First Search, B煤squeda en Anchura), como tem谩tica, formulamos una idea y tomamos un ejemplo en la vida real que es una red de servidores conectados entre s铆, ya sea definido o no. La idea surge de preguntarnos de que manera est谩n conectados dichos servidores y como llegan a recorrerse entre s铆 o llegar a 鈥渧isitarse鈥? entre s铆._
_El algoritmo implementado va ayudar a que las personas conozcan un tiempo estimado de llegada de un servidor a otro, verificando si hay una conexi贸n entre el punto inicial y el punto final. Nuestro programa construye una pre visualizaci贸n del grafo a partir de sus entradas, ayudando a que sea m谩s sencillo visualizar las conexiones entre servidores._
_La aplicaci贸n de este algoritmo tendr谩 una variedad de opciones con el que el usuario pueda interactuar. Ya sea que muestre el n煤mero de servidores por el que pas贸 la informaci贸n, el recorrido que realiz贸 los datos mandados, cual es el 煤nico camino para llegar de un nodo a otro o el 谩rbol de recorrido que tendr谩 toda esta red de servidores. La misi贸n de nuestra propuesta, es facilitar el diagnostico de tiempo tomando un paquete de datos para ir de un punto a otro, as铆 ayudar a que haya menos retrasos al momento de compartir informaci贸n._
_Aqu铆 tenemos un ejemplo gr谩fico de nuestro proyecto:._

![image](https://user-images.githubusercontent.com/80688833/118365381-940d6a00-b56a-11eb-86cf-d7f4cf8cdea5.png)

## Explicaci贸n del Algoritmo: :brain: 

_El algoritmo BFS (breadth-first search), encuentra los caminos m谩s cortos desde un v茅rtice de origen dado a todos los dem谩s v茅rtices, en t茅rminos del n煤mero de aristas en los caminos._
_Es una forma de encontrar todos los v茅rtices alcanzables de un grafo partiendo de un v茅rtice origen dado. Como en el algoritmo de b煤squeda en profundidad, BFS recorre una componente conexa de un grafo y define un 谩rbol de expansi贸n._
_Podemos ver que todo parte de un nodo inicial que ser谩 la ra铆z del 谩rbol que se forma, luego ve los adyacentes a ese nodo y los agrega en una cola 鈥渟tack鈥?, como la prioridad de una cola es FIFO (primero en entrar es el primero en salir), los siguientes nodos a evaluar ser谩n los adyacentes previamente insertados. una cosa bastante importante es el hecho de que no se pueden visitar 2 veces el mismo nodo o Estado. ya que sino podr铆amos terminar en un ciclo interminable o simplemente no hallar el punto deseado en el menor n煤mero de pasos._

![image](https://user-images.githubusercontent.com/80688833/118365229-d1252c80-b569-11eb-8e02-d9b4bcd575d9.png)

## Conclusi贸n: 馃敥

_El algoritmo BFS (breadth-first search), encuentra los caminos m谩s cortos desde un v茅rtice de origen dado a todos los dem谩s v茅rtices, en t茅rminos del n煤mero de aristas en los caminos._
_Es una forma de encontrar todos los v茅rtices alcanzables de un grafo partiendo de un v茅rtice origen dado. Como en el algoritmo de b煤squeda en profundidad, BFS recorre una componente conexa de un grafo y define un 谩rbol de expansi贸n._
_Podemos ver que todo parte de un nodo inicial que ser谩 la ra铆z del 谩rbol que se forma, luego ve los adyacentes a ese nodo y los agrega en una cola 鈥渟tack鈥?, como la prioridad de una cola es FIFO (primero en entrar es el primero en salir), los siguientes nodos a evaluar ser谩n los adyacentes previamente insertados. una cosa bastante importante es el hecho de que no se pueden visitar 2 veces el mismo nodo o Estado. ya que sino podr铆amos terminar en un ciclo interminable o simplemente no hallar el punto deseado en el menor n煤mero de pasos._
## Construido con:馃洜锔?

* [OnlineGDB](https://www.onlinegdb.com) - Compilador y debugger para C++ en linea.
* [VisualStudioCode](https://code.visualstudio.com) - Editor de texto usado.
* [CodeBlocks](https://www.codeblocks.org) - IDE usado.
* [github](https://github.com) 

## Autores:鉁掞笍

* **Gabriel Neme** -[GaboRex](https://github.com/GaboRex)
* **Miguel Molina** - [Mickysaurio-rex](https://github.com/Mickysaurio-rex)
* **Richard Rojas** -[RichyRed](https://github.com/RichyRed)
* **Pablo Badani** -[Pabdro](https://github.com/Pabdro)

![image](https://user-images.githubusercontent.com/80688833/118365653-b05dd680-b56b-11eb-8241-d0d5b5afeb61.png)
