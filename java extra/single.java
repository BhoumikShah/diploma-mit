class cat {
    void meowing() {
        System.out.println("meow");
    }
}
class Dog extends cat {
    void barking() {
        System.out.println("bhow");
    }
}
public class single {
    public static void main(String[] args) {

        Dog dog = new Dog();


        dog.meowing();
        dog.barking();
    }
}
