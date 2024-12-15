# Configuración del compilador y flags
CC = gcc
CFLAGS = -Wall -g -std=c11 # Flags de compilación estándar C11
LDFLAGS = -lm # Flags del enlazador (ejemplo: librería matemática)

# Directorios
SRCDIR = src
INCDIR = include
OBJDIR = obj
BINDIR = bin

# Archivos fuente
SRC = $(wildcard $(SRCDIR)/*.c)
# Archivos objeto
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
# Ejecutable
TARGET = $(BINDIR)/sistema_operativo

# Regla para crear directorios
.PHONY: all clean
all: $(TARGET)
$(TARGET): $(OBJDIR)
$(OBJDIR):
	mkdir -p $(OBJDIR) $(BINDIR)

# Regla para compilar
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

# Regla para enlazar
$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

# regla para agregar directorio bin
$(BINDIR):
	mkdir -p $(BINDIR)

# Limpiar
clean:
	rm -rf $(OBJDIR) $(TARGET)