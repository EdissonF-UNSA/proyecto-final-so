#include <stdio.h> // for printf
#include <stdlib.h> // for malloc
#include "proceso.h"

typedef struct Proceso {
    int id;
    int prioridad;
    int tiempo_ejecucion;
    struct Proceso *siguiente;
} Proceso;

Proceso *primero = NULL;

void crear_proceso(int prioridad, int tiempo_ejecucion) {
    static int id = 1;
    Proceso *nuevo_proceso = (Proceso *)malloc(sizeof(Proceso));
    nuevo_proceso->id = id++;
    nuevo_proceso->prioridad = prioridad;
    nuevo_proceso->tiempo_ejecucion = tiempo_ejecucion;
    nuevo_proceso->siguiente = primero;
    primero = nuevo_proceso;
    printf("[INFO] Proceso creado: ID = %d, Prioridad = %d, Tiempo = %d\n", nuevo_proceso->id, nuevo_proceso->prioridad, nuevo_proceso->tiempo_ejecucion);
}

void listar_procesos() {
    Proceso *p = primero;
    if (p == NULL) {
        printf("[INFO] No hay procesos para listar.\n");
    } else {
        printf("[INFO] Listando procesos:\n");
        while (p != NULL) {
            printf("ID: %d, Prioridad: %d, Tiempo de Ejecución: %d\n", p->id, p->prioridad, p->tiempo_ejecucion);
            p = p->siguiente;
        }
    }
}

void crear_proceso_interactivo() {
    int prioridad, tiempo;
    printf("[INFO] Ingrese la prioridad del proceso: ");
    scanf("%d", &prioridad);
    printf("[INFO] Ingrese el tiempo de ejecución del proceso: ");
    scanf("%d", &tiempo);
    crear_proceso(prioridad, tiempo);
}
