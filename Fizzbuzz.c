int main() {
    for (int numero = 1; numero <= 30; numero++) {
        if (numero % 3 == 0 && numero % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (numero % 3 == 0) {
            printf("Fizz\n");
        }
        else if (numero % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", numero);
        }
    }
    return 0;
}
