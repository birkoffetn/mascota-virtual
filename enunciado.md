# Requisitos
Programa para generar una mascota virtual estilo Tamagotchi (se debe poner un nombre por parte del usuario) el cual tendrá una medición para su salud física y otra para su salud mental, ambas al 100% al momento de crearse y con las siguientes caracteristicas/funciones para medir su salud y su estado de ánimo(salud mental).
## Para la salud física nececsita:
* Se debe alimentar al menos 3 veces al día (cada 8 horas) para conservar su estado de salud.
* Si se tiene el 100% de salud, en caso de no ser alimentado en  72 horas(9 alimentos no consumidos) la mascota muere de inamición (Cada vez que no se alimenta en 8 horas pierde 11.12% de salud);
* Cada que se alimenta a horas adecuadas gana 5% de salud, no puede rebasar el 100%.
* Debe bañarse cada día (24 horas), de lo contrario, pierde 15% de salud.
* Cuando enferma (menos de 60% de saluld) deberá dársele medicina cada 8 horas (cada vez que se le administra subirá 5% de salud) repetir hasta llegar al 80%, no se le puede dar la medicina mas de una vez en un periodo de 8 horas, de lo contrario bajara 5%.
## Para la salud mental necesita:
* Jugar al menos una vez al día con él, de lo contrario pierde10% de estado de ánimo (Agregar 3 mini-juegos que puedes jugar con tu mascota virtual).
* Si no come, tambien pierde 5% de estado de animo.
* Si enferma físicamente tambien pierde 30% en estado de ánimo.
En caso de llegar a 0% en salud física o mental nuestra mascota muere.

El programa debe tener persistencia de datos de salud física y mental y evaluar fechas y horas de los eventos para poder cumplir con los requisitos planteados.
