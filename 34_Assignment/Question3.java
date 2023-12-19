import java.util.*;

class Digit {
    public int iNo = 0;

    public Digit(int iNo) {
        this.iNo = iNo;
    }

    public int Display() {
        int iDigit = 0;
        int iCount = 0;
        if (iNo < 0) { // updator
            iNo = -iNo;
        }
        while (iNo != 0) {
            iDigit = iNo % 10;
            if (iDigit >= 3 && iDigit <= 7) {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}

class Question3 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digit ADobj = new Digit(iValue);
        iRet = ADobj.Display();
        System.out.println("Number of digits between 3 and 7 are : " + iRet);

        sobj.close();

    }
}
