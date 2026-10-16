*Este proyecto ha sido creado como parte del currículo de 42 por acornia.*

# ft_printf

## Descripción

**`ft_printf`** es una redefinición desde cero de la función `printf` de la librería estándar de C (`<stdio.h>`).

En C, imprimir un simple texto en la terminal es directo, pero dar formato dinámico a datos complejos (combinar texto, enteros, punteros en hexadecimal y caracteres en una sola instrucción) requiere una arquitectura capaz de analizar cadenas al vuelo y gestionar tipos de datos totalmente heterogéneos.

El objetivo principal de este proyecto es construir un motor de formateo de texto eficiente utilizando **funciones variádicas** (`<stdarg.h>`), entendiendo cómo interactúa el compilador con la memoria de la pila (*stack*) y garantizando que cada carácter escrito se contabilice con exactitud.

---

## Instrucciones
Para compilar la librería, ejecuta `make` en la raíz del repositorio. Esto generará el archivo `libftprintf.a`. 
Las reglas disponibles en el `Makefile` son:
* `make` o `make all`: Compila todo.
* `make clean`: Elimina los archivos objeto (`.o`).
* `make fclean`: Elimina los archivos objeto y el archivo `libftprintf.a`.
* `make re`: Ejecuta `fclean` seguido de `all`.

## Recursos

* **Uso de IA:** Se ha usado la Inteligencia Artificial para documentarse y como apoyo para entender el funcionamiento de las funciones variaticas.
* **Uso del Man.** Se ha usado el manual que viene por defecto en Linux.

### ¿Qué hace exactamente esta librería?

A diferencia de un formateador convencional, `ft_printf` actúa como un **despachador de tipos de datos en tiempo de ejecución**:

1. **Parsea la cadena de formato:** Recorre el texto buscando la señal de escape `%`.
2. **Interpreta la memoria:** Extrae de la lista de argumentos variables exactamente el número de bytes correspondiente al tipo de dato solicitado.
3. **Traduce y convierte bases:** Convierte números enteros a texto decimal y direcciones de memoria a su representación hexadecimal.
4. **Controla la salida E/S:** Escribe los datos directamente en la salida estándar (`stdout`) mediante llamadas al sistema y devuelve el recuento exacto de bytes impresos (o `-1` en caso de error grave).

### Especificadores gestionados

| <big>Especificador<big> | <big>Conversión<big> | <big>Descripción / Comportamiento<big> |
| :---: | :---: | :--- |
| **[`%c`](#)** | Carácter | Imprime un único carácter. |
| **[`%s`](#)** | Cadena (`char *`) | Imprime una secuencia de caracteres (o `(null)` si el puntero es nulo). |
| **[`%p`](#)** | Puntero (`void *`) | Imprime la dirección de memoria en hexadecimal en minúsculas con el prefijo `0x` (o `(nil)` en punteros nulos). |
| **[`%d`](#)** | Entero decimal | Imprime un entero con signo en base 10. |
| **[`%i`](#)** | Entero | Imprime un entero en base 10 (equivalente a `%d`). |
| **[`%u`](#)** | Entero sin signo | Imprime un entero positivo en base 10 (`unsigned int`). |
| **[`%x`](#)** | Hexadecimal | Imprime un número entero en base 16 utilizando minúsculas (`0123456789abcdef`). |
| **[`%X`](#)** | Hexadecimal | Imprime un número entero en base 16 utilizando mayúsculas (`0123456789ABCDEF`). |
| **[`%%`](#)** | Porcentaje | Imprime el símbolo `%` literal. |

---
