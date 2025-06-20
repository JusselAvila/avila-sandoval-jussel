﻿# NOMBRE PROYECTO

Gestión de notas de estudiantes universitarios


## Introducción

### Descripción general del sistema
El Sistema de Gestión de Notas Universitarias es una plataforma web diseñada para la Carrera de Ingeniería Electrónica de la Universidad Tecnológica de Bolivia (UTEC). Su propósito principal es optimizar el proceso de registro, edición y cálculo de calificaciones académicas para los docentes. Actualmente, la gestión de notas puede ser un proceso manual y propenso a errores. Este sistema busca modernizar y centralizar esta tarea, proporcionando una interfaz intuitiva y herramientas automatizadas para garantizar la precisión y eficiencia en el manejo de la información académica.

### Objetivo General
Desarrollar e implementar un sistema robusto y fácil de usar que permita a los docentes de la Carrera de Ingeniería Electrónica de la UTEC registrar, editar y consultar calificaciones de estudiantes, así como calcular promedios de manera automática, garantizando la integridad y disponibilidad de la información académica.

### Objetivos específicos
1. Gestionar Usuarios y Roles: Permitir la creación, modificación y eliminación de cuentas de usuario, asignando roles con permisos específicos (docente, administrador) para controlar el acceso y las funcionalidades del sistema.

2. Registrar y Editar Calificaciones: Facilitar a los docentes la entrada y modificación de calificaciones para estudiantes en diferentes materias y tipos de evaluación, asegurando un registro preciso y flexible de los datos académicos.

3. Calcular y Visualizar Promedios: Automatizar el cálculo de promedios individuales y grupales, permitiendo a los docentes visualizar los resultados de forma clara y exportar informes para fines de seguimiento y documentación.

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1

###HU-01: Como administrador, quiero poder crear nuevas cuentas de usuario para docentes, para que puedan acceder al sistema y comenzar a gestionar sus calificaciones.

-Positivo: El sistema crea la cuenta con éxito, asigna el rol "Docente" por defecto, y envía un correo de bienvenida con credenciales iniciales al docente.

-Negativo: Si el correo electrónico proporcionado ya está registrado, el sistema debe mostrar un mensaje de error y no permitir la creación de una cuenta duplicada.

###HU-02: Como administrador, quiero poder asignar roles (ej. Docente, Administrador) a los usuarios, para controlar sus permisos y funcionalidades dentro del sistema.

-Positivo: El sistema permite al administrador seleccionar un usuario existente y cambiar su rol desde una lista predefinida, aplicando los nuevos permisos inmediatamente.

-Negativo: El sistema debe prevenir que un administrador revoque o desasigne el rol de "Administrador" de su propia cuenta si es el único administrador activo, para evitar un bloqueo del sistema.

###HU-03: Como administrador, quiero poder modificar la información de un usuario existente (ej. nombre, correo), para mantener los datos de contacto y perfil actualizados.

-Positivo: El sistema permite al administrador editar los campos de información del usuario y guarda los cambios exitosamente.

-Negativo: Si se intenta modificar el correo electrónico de un usuario a uno que ya existe, el sistema debe mostrar un error y no permitir la actualización.

###HU-04: Como administrador, quiero poder desactivar o eliminar cuentas de usuario, para gestionar el acceso al sistema de forma segura.
Criterios de Aceptación:

-Positivo: El sistema desactiva la cuenta del usuario, impidiendo su inicio de sesión, o la elimina completamente tras una confirmación.

-Negativo: Si se intenta eliminar una cuenta de usuario que tiene registros activos (ej. calificaciones asignadas), el sistema debe advertir sobre las implicaciones o requerir la reasignación de esos registros antes de la eliminación.

###HU-05: Como usuario, quiero poder cambiar mi contraseña actual, para asegurar la privacidad y seguridad de mi cuenta.

-Positivo: El sistema valida la contraseña actual y permite al usuario establecer una nueva contraseña segura, confirmando el cambio.

-Negativo: Si la contraseña actual ingresada por el usuario es incorrecta, el sistema debe mostrar un mensaje de error y no permitir el cambio de contraseña.

###HU-06: Como usuario, quiero poder recuperar mi contraseña si la olvido, para no perder el acceso al sistema y poder continuar con mis tareas.

-Positivo: El sistema debe enviar un enlace de recuperación de contraseña al correo electrónico asociado con la cuenta del usuario, que permite establecer una nueva contraseña.

-Negativo: Si el correo electrónico ingresado no está registrado en el sistema, el sistema debe indicar que el correo no fue encontrado, sin revelar información de la cuenta.

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2

###HU-01: Como docente, quiero poder seleccionar una materia y un grupo de estudiantes, para registrar calificaciones de manera organizada y específica.

-Positivo: El sistema muestra una lista de materias asignadas al docente, y al seleccionar una, presenta la lista de estudiantes inscritos en esa materia.

-Negativo: Si el docente intenta seleccionar una materia que no le ha sido asignada, el sistema debe mostrar un mensaje de acceso denegado y no cargar la lista de estudiantes.

###HU-02: Como docente, quiero poder ingresar calificaciones individuales para cada estudiante en una materia, para llevar un registro preciso del rendimiento académico.

-Positivo: El sistema guarda la calificación ingresada correctamente para el estudiante y la evaluación específica, y la muestra en la tabla de calificaciones.

-Negativo: Si la calificación ingresada contiene caracteres no numéricos o está fuera del rango válido (ej. 0-100), el sistema debe mostrar una alerta de validación y no guardar el valor.

###HU-03: Como docente, quiero poder editar una calificación existente de un estudiante, en caso de errores o correcciones necesarias.

-Positivo: El sistema permite modificar la calificación de un estudiante en una evaluación específica y actualiza el valor en la base de datos y en la vista.

-Negativo: Si el docente intenta editar una calificación de una materia que ya fue "cerrada" o finalizada (ej. después de la fecha límite de entrega de notas), el sistema debe impedir la edición y mostrar un mensaje indicando que la materia está cerrada.

###HU-04: Como docente, quiero poder registrar diferentes tipos de evaluaciones (ej. parcial, final, prácticas), para una gestión integral y flexible de las notas.

-Positivo: El sistema permite al docente añadir nuevas columnas de evaluación (ej. "Examen Parcial 2", "Proyecto Final") y asignarles un tipo y una ponderación.

Negativo: Si el docente intenta crear un tipo de evaluación con un nombre ya existente para la misma materia, el sistema debe indicar que el nombre ya está en uso.

###HU-05: Como docente, quiero poder ver un listado de todos los estudiantes inscritos en una materia, para asegurarme de que no falte nadie al registrar calificaciones.

-Positivo: El sistema muestra una tabla clara con el nombre completo y código de cada estudiante matriculado en la materia seleccionada.

-Negativo: Si no hay estudiantes inscritos en la materia seleccionada, el sistema debe mostrar un mensaje indicando "No hay estudiantes inscritos" en lugar de una tabla vacía.

###HU-06: Como docente, quiero recibir una confirmación visual cuando una calificación se ha guardado exitosamente, para tener certeza de que el proceso fue correcto.

-Positivo: Después de guardar una calificación, el sistema muestra un mensaje breve y visible (ej. "Calificación guardada exitosamente") o un cambio visual en el campo.

-Negativo: Si ocurre un error al intentar guardar la calificación (ej. problema de conexión, error de base de datos), el sistema debe mostrar un mensaje de error claro y persistente, indicando que la calificación no se guardó.
---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3

###HU-01: Como docente, quiero que el sistema calcule automáticamente el promedio final de cada estudiante en una materia, basándose en las calificaciones registradas, para ahorrar tiempo y evitar errores manuales.

-Positivo: El sistema calcula y muestra el promedio final del estudiante en tiempo real (o tras un breve refresco) al ingresar o modificar las calificaciones, aplicando las ponderaciones definidas.

-Negativo: Si faltan calificaciones obligatorias para el cálculo del promedio final (según las ponderaciones), el sistema debe mostrar el promedio como "Incompleto" o "N/A", y no un valor numérico incorrecto.

###HU-02: Como docente, quiero poder ver el promedio de cada estudiante desglosado por tipo de evaluación (ej. promedio de parciales, promedio de prácticas), para entender mejor el rendimiento en diferentes áreas.

-Positivo: El sistema permite al docente ver una vista detallada de las calificaciones y los promedios parciales por cada tipo de evaluación para un estudiante.

-Negativo: Si no hay calificaciones ingresadas para un tipo de evaluación específico, el sistema debe mostrar un guion o "0" para ese promedio, en lugar de un error.

###HU-03: Como docente, quiero poder visualizar el promedio general de una materia (promedio de todos los estudiantes), para tener una visión consolidada del desempeño del grupo.

-Positivo: El sistema muestra el promedio general de la materia (sumatoria de promedios finales de estudiantes / número de estudiantes) en un lugar visible de la interfaz.

-Negativo: Si la materia no tiene estudiantes inscritos o calificaciones ingresadas, el sistema debe mostrar el promedio general como "No disponible" o "0", en lugar de un cálculo erróneo.

###HU-04: Como docente, quiero poder exportar el listado de calificaciones y promedios a un formato compatible (ej. Excel, PDF), para generar informes o respaldos fuera del sistema.

-Positivo: El sistema genera un archivo Excel o PDF que contiene todas las calificaciones individuales, promedios parciales y el promedio final de cada estudiante en la materia seleccionada.

-Negativo: Si el usuario intenta exportar un volumen de datos excesivamente grande que pueda causar un fallo en la exportación, el sistema debe notificar al usuario sobre el límite o sugerir un método de exportación alternativo.

###HU-05: Como docente, quiero que el sistema me alerte si faltan calificaciones para completar el promedio de un estudiante, para evitar errores o datos incompletos.

-Positivo: El sistema muestra un indicador visual (ej. icono, color diferente) junto a los promedios de los estudiantes que tienen calificaciones pendientes según las ponderaciones.

-Negativo: El sistema no debe generar una alerta de calificaciones faltantes si todas las calificaciones requeridas para el promedio ya han sido ingresadas.

###HU-06: Como docente, quiero que el sistema me permita definir la ponderación de cada tipo de evaluación para el cálculo del promedio final, para adaptarlo a mi metodología de evaluación.

-Positivo: El sistema permite al docente asignar un porcentaje (ponderación) a cada tipo de evaluación (ej. Parcial 30%, Final 40%, Prácticas 30%) y utiliza estos valores para calcular el promedio final.

-Negativo: Si la suma de las ponderaciones de todos los tipos de evaluación no es igual a 100%, el sistema debe mostrar una advertencia y no permitir guardar las ponderaciones hasta que la suma sea correcta.
