import java.util.Scanner;
public class HollowSquare 
{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the stars in each side of square: ");
    int sideSize = sc.nextInt();
    for (int i = 0; i < sideSize; i++ )
    {
      for (int j = 0 ; j < sideSize; j++ )
      {
        if (i == 0 || i == sideSize - 1 || j == 0 || j == sideSize - 1)
        {
          System.out.print("*"+" ");
        }
        else {
          System.out.print(" "+ " ");
        }
      }
      System.out.println();
    }
  }
}