#include <stdio.h>
#include "kernel.h"
#include "planificador.h"
#include "gestor_memoria.h"
#include "proceso.h"

int main() {
    int option;
    do {
        printf("\n[MENU] Kernel Simulator\n");
        printf("1. Crear proceso\n");
        printf("2. Listar procesos\n");
        printf("3. Ejecutar planificador\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                crear_proceso_interactivo();
                break;
            case 2:
                listar_procesos();
                break;
            case 3:
                ejecutar_planificador();
                break;
            case 4:
                printf("\n[INFO] Saliendo del simulador...\n");
                break;
            default:
                printf("\n[ERROR] Opción no válida. Intente de nuevo.\n");
        }
    } while (option != 4);

    return 0;
}
