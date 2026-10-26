*Este proyecto ha sido creado como parte del currículo de 42 por acornia.*

# Get Next Line

##  Descripción

**Get Next Line** es un proyecto del cursus principal de 42 cuyo objetivo es programar una función en C capaz de leer y devolver una línea completa desde un descriptor de archivo (*file descriptor*), llamada tras llamada, hasta alcanzar el final del archivo.

Este proyecto introduce y profundiza en el concepto fundamental de las **variables estáticas** en C, el manejo eficiente de memoria dinámica en el *heap* (`malloc` y `free`), y la gestión optimizada de I/O a través de la llamada al sistema `read`.

---

## 🛠️ Algoritmo e Implementación

### Justificación del Algoritmo

Para procesar archivos de cualquier tamaño de manera eficiente y sin cargar todo el archivo en memoria de una sola vez, la función utiliza un enfoque basado en **almacenamiento en buffer persistente**:

1. **Lectura por bloques (`BUFFER_SIZE`):** Se lee el archivo a trozos de tamaño `BUFFER_SIZE` bytes utilizando la llamada `read()`.
2. **Acumulación estática (`stash`):** El contenido leído se va concatenando en una variable estática (`stash` o reserva). De este modo, la información no procesada entre llamadas a la función se conserva intacta en memoria.
3. **Búsqueda del salto de línea (`\n`):** En cada iteración del bucle de lectura, se verifica si el `stash` ya contiene un carácter `\n`.
4. **Extracción de la línea:**
   - Se corta la cadena acumulada desde el inicio hasta el primer `\n` (incluido) y se devuelve dicha subcadena como la línea actual.
   - El resto de la cadena (lo que queda después del `\n`) se guarda en la variable estática para la siguiente llamada a `get_next_line`.
5. **Gestión de fin de archivo y errores:** Se liberan adecuadamente todas las reservas de memoria para prevenir fugas (*memory leaks*) en caso de error de lectura, descriptor inválido o al llegar al final del archivo.

---

## 💻 Instrucciones

### Requisitos

- Compilador de C (`cc`).
- Flags de compilación obligatorias: `-Wall -Wextra -Werror`.

### Compilación e Integración

Para incluir `get_next_line` en tus proyectos, compila los archivos fuente.,

```bash
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c