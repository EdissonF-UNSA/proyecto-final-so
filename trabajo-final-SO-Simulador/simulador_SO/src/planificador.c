#include <stdio.h> // for printf
#include <stdlib.h> // for malloc
#include "planificador.h"
#include "proceso.h"

void ejecutar_planificador() {
    printf("[INFO] Ejecutando planificador...\n");
    // Implementar algoritmo de planificación (FIFO, Round-Robin, etc.)
    // Aquí simplemente imprimimos los procesos y los ejecutamos uno por uno
    listar_procesos();
}
