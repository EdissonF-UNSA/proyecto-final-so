#!/bin/bash

# Ruta base del proyecto
BASE_DIR="simulador_kernel"

# Crear directorios
mkdir -p $BASE_DIR/src
mkdir -p $BASE_DIR/include

# Crear archivos fuente
touch $BASE_DIR/src/sistema_operativo.c
touch $BASE_DIR/src/kernel.c
touch $BASE_DIR/src/planificador.c
touch $BASE_DIR/src/gestor_memoria.c
touch $BASE_DIR/src/proceso.c

# Crear archivos de cabecera
touch $BASE_DIR/include/sistema_operativo.h
touch $BASE_DIR/include/kernel.h
touch $BASE_DIR/include/planificador.h
touch $BASE_DIR/include/gestor_memoria.h
touch $BASE_DIR/include/proceso.h

# Crear el Makefile
touch $BASE_DIR/Makefile

# Confirmación
echo "Estructura de directorios y archivos creada correctamente en $BASE_DIR"

