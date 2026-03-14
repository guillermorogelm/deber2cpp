# Deber 2  Diagrama de Flujo: Input, Output y Data Types en C++

**Nombre completo:** Guillermo Rogel  
**Curso / NRC:** 2684  

## Descripción del ejercicio

Este ejercicio consiste en tomar el programa desarrollado en el Deber 1  un sistema de registro de estudiantes en C++  y representar su lógica mediante un diagrama de flujo. El diagrama incluye los nodos de Inicio y Fin, las entradas de datos (`cin`), los procesos internos y las salidas (`cout`), siguiendo los estándares de simbología de diagramas de flujo vistos en clase.

## Lógica del programa

El programa sigue esta secuencia lógica:

1. **Declaración de variables**  se definen cuatro variables con tipos de datos distintos: `nombre` (string), `inicial` (char), `edad` (int) y `altura` (float).
2. **Salida de encabezado**  se imprime el título "Registro de Estudiante" usando `cout`.
3. **Entrada de datos**  el usuario ingresa secuencialmente su nombre, inicial de apellido, edad y altura mediante `cin`.
4. **Salida de resultados**  los datos ingresados se muestran formateados en pantalla bajo el encabezado "Datos Ingresados".
5. **Fin del programa**  `return 0` indica que la ejecución terminó correctamente.

No hay estructuras condicionales ni ciclos en este programa; el flujo es completamente lineal y secuencial.

## Instrucciones para compilar y ejecutar

```bash
g++ deber2.cpp -o deber2
./deber2
```

## Diagrama de flujo

El diagrama de flujo se encuentra en la carpeta [`diagramas/`](./diagramas/).
