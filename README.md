# BFS-JAMBAO 🤓🍺
_printf("Mucha Cumbia");._
### Proceso de Instalación: 🔧

_Para empezar con el proyecto se procede a instalar un editor de código con el que debemos trabajar el programa, una buena opción es Visual Studio Code._
 _Otra alternativa si es que el usuario no cuenta con los recursos necesarios para ejecutar los algoritmos, ya sea por falta de espacio en la memoria RAM o se tiene instalado un procesador no satisfactorio, es que utilice compilador online, este utiliza los recursos de la nube para correr los programas._
_Crear una carpeta en donde guardaremos el código trabajado, se recomienda fabricarlo en un lugar fácil de recordar, ya que es muy común perder la ubicación de esta._   
_Después de realizar todos los pasos, procedemos a crear un repositorio en la página GitHub. Primero creamos una cuenta, o si ya se cuenta con una, ingresamos nuestro usuario; seguido a esto, en la pantalla de inicio nos dirigimos a nuestros repositorios en la barra de navegación, seleccione Create new (+) y luego elija "New repository"._
_En la página Create a new repository (Crear un nuevo repositorio), haga lo siguiente:_
_En el cuadro Repository name (Nombre del repositorio), indique el nombre apropiado para el repositorio._
_Seleccione Public._
_Algo Importante:_
_Si se selecciona la opción Public (Pública) predeterminada, cualquiera podrá ver este repositorio. Puede seleccionar la opción Private (Privado) para limitar quién puede ver el repositorio y confirmarlo(esto no es gratis)._
_Active la casilla de verificación "Initialize this repository with a README” (Inicializar este repositorio con un archivo README). Este archivo README.md permite que podamos escribir como una portada o carta de presentación de nuestra página en github, cada persona puede personalizarlo de la manera que cada uno prefiera agregando imágenes, dividiendo en carpetas los archivos que subamos, así para tener todo ordenado y clasificado, también podemos editar esto desde nuestro editor de texto favorito “Vscode”. Elija "Create repository" crear repositorio._ 
_“Algo interesante:”_
_Ahora con nuestro repositorio creado y personalizado tenemos que clonarlo para poder realizar el proceso de conectar nuestro Visual Studio Code con nuestro repositorio en Github, así podremos usar con diferentes comandos en la terminal para subir nuestros proyectos directamente desde vsual studio code y lo guardamos en nuestro repositorio._

![image](https://user-images.githubusercontent.com/80688833/118200997-7df59180-b424-11eb-9ffe-4e52028457cf.png)

## Definición del Problema: :hamburger: 

_Para nuestro proyecto escogimos el algoritmo BFS (en inglés es Breadth First Search, Búsqueda en Anchura), como temática, formulamos una idea y tomamos un ejemplo en la vida real que es una red de servidores conectados entre sí, ya sea definido o no. La idea surge de preguntarnos de que manera están conectados dichos servidores y como llegan a recorrerse entre sí o llegar a “visitarse” entre sí._
_El algoritmo implementado va ayudar a que las personas conozcan un tiempo estimado de llegada de un servidor a otro, verificando si hay una conexión entre el punto inicial y el punto final. Nuestro programa construye una pre visualización del grafo a partir de sus entradas, ayudando a que sea más sencillo visualizar las conexiones entre servidores._
_La aplicación de este algoritmo tendrá una variedad de opciones con el que el usuario pueda interactuar. Ya sea que muestre el número de servidores por el que pasó la información, el recorrido que realizó los datos mandados, cual es el único camino para llegar de un nodo a otro o el árbol de recorrido que tendrá toda esta red de servidores. La misión de nuestra propuesta, es facilitar el diagnostico de tiempo tomando un paquete de datos para ir de un punto a otro, así ayudar a que haya menos retrasos al momento de compartir información._
_Aquí tenemos un ejemplo gráfico de nuestro proyecto:._

![image](https://user-images.githubusercontent.com/80688833/118365381-940d6a00-b56a-11eb-86cf-d7f4cf8cdea5.png)

## Explicación del Algoritmo: :brain: 

_El algoritmo BFS (breadth-first search), encuentra los caminos más cortos desde un vértice de origen dado a todos los demás vértices, en términos del número de aristas en los caminos._
_Es una forma de encontrar todos los vértices alcanzables de un grafo partiendo de un vértice origen dado. Como en el algoritmo de búsqueda en profundidad, BFS recorre una componente conexa de un grafo y define un árbol de expansión._
_Podemos ver que todo parte de un nodo inicial que será la raíz del árbol que se forma, luego ve los adyacentes a ese nodo y los agrega en una cola “stack”, como la prioridad de una cola es FIFO (primero en entrar es el primero en salir), los siguientes nodos a evaluar serán los adyacentes previamente insertados. una cosa bastante importante es el hecho de que no se pueden visitar 2 veces el mismo nodo o Estado. ya que sino podríamos terminar en un ciclo interminable o simplemente no hallar el punto deseado en el menor número de pasos._

![image](https://user-images.githubusercontent.com/80688833/118365229-d1252c80-b569-11eb-8e02-d9b4bcd575d9.png)

## Conclusión: 🔩

_El algoritmo BFS (breadth-first search), encuentra los caminos más cortos desde un vértice de origen dado a todos los demás vértices, en términos del número de aristas en los caminos._
_Es una forma de encontrar todos los vértices alcanzables de un grafo partiendo de un vértice origen dado. Como en el algoritmo de búsqueda en profundidad, BFS recorre una componente conexa de un grafo y define un árbol de expansión._
_Podemos ver que todo parte de un nodo inicial que será la raíz del árbol que se forma, luego ve los adyacentes a ese nodo y los agrega en una cola “stack”, como la prioridad de una cola es FIFO (primero en entrar es el primero en salir), los siguientes nodos a evaluar serán los adyacentes previamente insertados. una cosa bastante importante es el hecho de que no se pueden visitar 2 veces el mismo nodo o Estado. ya que sino podríamos terminar en un ciclo interminable o simplemente no hallar el punto deseado en el menor número de pasos._
## Construido con:🛠️

* [OnlineGDB](https://www.onlinegdb.com) - Compilador y debugger para C++ en linea.
* [VisualStudioCode](https://code.visualstudio.com) - Editor de texto usado.
* [CodeBlocks](https://www.codeblocks.org) - IDE usado.
* [github](https://github.com) 

## Autores:✒️

* **Gabriel Neme** -[GaboRex](https://github.com/GaboRex)
* **Miguel Molina** - [Mickysaurio-rex](https://github.com/Mickysaurio-rex)
* **Richard Rojas** -[RichyRed](https://github.com/RichyRed)
* **Pablo Badani** -[Pabdro](https://github.com/Pabdro)

![image](https://user-images.githubusercontent.com/80688833/118365653-b05dd680-b56b-11eb-8241-d0d5b5afeb61.png)
