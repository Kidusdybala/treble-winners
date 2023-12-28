public class Exception {
    public static void main(String[] args) {
        System.out.println("this is part of the code before exception");
        try {
            int a = 33;
            int b = 33 / 0;
            System.out.println(b);
        } catch (ArithmeticException e) {
            System.out.println(e+"Division by zero is not allowed");
        }
    }
}
