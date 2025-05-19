#include <stdio.h>

int main() {
    int opcion;

    printf("SISTEMAS DE ECUACIONES\n");
    printf("1- Sistema 2x2\n");
    printf("2- Sistema 3x3\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        float a1, b1, c1;
        float a2, b2, c2;
        float det, detX, detY, x, y;

        printf("Ingrese los valores del sistema 2x2:\n");
        
        printf("Ecuacion 1 (a1 b1 c1): ");
        scanf("%f %f %f", &a1, &b1, &c1);
        printf("Ecuacion 2 (a2 b2 c2): ");
        scanf("%f %f %f", &a2, &b2, &c2);

        det = a1 * b2 - a2 * b1;

        if (det == 0) {
            printf("El sistema no tiene solucion unica.\n");
        } 
		else {
            detX = c1 * b2 - c2 * b1;
            detY = a1 * c2 - a2 * c1;
            x = detX / det;
            y = detY / det;

            printf("Solucion:\n");
            printf("x = %.2f\n", x);
            printf("y = %.2f\n", y);
        }

    } 
	else if (opcion == 2) {
        float a1, b1, c1, d1;
        float a2, b2, c2, d2;
        float a3, b3, c3, d3;
        float D, Dx, Dy, Dz;
        float x, y, z;

        printf("Ingrese los valores del sistema 3x3:\n");
        printf("Ecuacion 1 (a1 b1 c1 d1): ");
        scanf("%f %f %f %f", &a1, &b1, &c1, &d1);
        printf("Ecuacion 2 (a2 b2 c2 d2): ");
        scanf("%f %f %f %f", &a2, &b2, &c2, &d2);
        printf("Ecuacion 3 (a3 b3 c3 d3): ");
        scanf("%f %f %f %f", &a3, &b3, &c3, &d3);

        D = a1*(b2*c3 - b3*c2) - b1*(a2*c3 - a3*c2) + c1*(a2*b3 - a3*b2);

        if (D == 0) {
            printf("El sistema no tiene solucion unica.\n");
        } 
		else {
            Dx = d1*(b2*c3 - b3*c2) - b1*(d2*c3 - d3*c2) + c1*(d2*b3 - d3*b2);
            Dy = a1*(d2*c3 - d3*c2) - d1*(a2*c3 - a3*c2) + c1*(a2*d3 - a3*d2);
            Dz = a1*(b2*d3 - b3*d2) - b1*(a2*d3 - a3*d2) + d1*(a2*b3 - a3*b2);

            x = Dx / D;
            y = Dy / D;
            z = Dz / D;

            printf("Solucion:\n");
            printf("x = %.2f\n", x);
            printf("y = %.2f\n", y);
            printf("z = %.2f\n", z);
        }
        
    }
	 else {
        printf("Error, elija una opcion valida.\n");
    }

    return 0;
}
