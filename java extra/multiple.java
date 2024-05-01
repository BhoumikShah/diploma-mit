// Declare the interfaces
interface olivera {
    void grapple();
}

interface holloway {
    void box();
}

// Implement the interfaces in a class
class Mma implements olivera, holloway {
    public void grapple()
    {
        System.out.println("dobronx");
    }

    public void box()
    {
        System.out.println("blessed");
    }
}

// Use the class to call the methods from the interfaces
class Main {
    public static void main(String[] args)
    {
        Mma mma = new Mma();
        mma.grapple();
        mma.box();
    }
}
