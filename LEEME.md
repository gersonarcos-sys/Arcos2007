# Arcos2007
taller de clase
1. Codigo estudiantil: 104626011503

2. No se puede instanciar un objeto de Vehiculo directamente porque es una clase abstracta al contener metodos virtuales puros como getTipo y cobrar igualados a cero. En esta estructura toca definir un tipo exacto de vehiculo para operar.

3. El destructor de Vehiculo debe ser virtual para que al eliminar un puntero base con delete, se ejecute primero el destructor de la clase derivada correspondiente. Con esto se libera completamente la memoria y evita fugas en tiempo de ejecucion.

4. Si se llama a registrarPaso con un puntero nulo, el programa mira si se cumple la condicion y evita procesar el registro para prevenir un cierre inesperado del programa. Elegí esta opción para que las cuentas del dinero y la cantidad de vehículos no se vean afectadas por datos vacíos.

