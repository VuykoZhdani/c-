package ua.lviv.iot;

class TesTest {
    @org.junit.jupiter.api.Test
    void name () {
        Stetoscop stetoscop1 =new Stetoscop(40, 34.69);
        Voltmetr voltmetr1 =new Voltmetr(56, 97);
        Stetoscop stetoscop2 =new Stetoscop(20, 64.69);
        Voltmetr voltmetr2 =new Voltmetr(76, 97);
        Stetoscop stetoscop3 =new Stetoscop(41, 54.69);
        Voltmetr voltmetr3 =new Voltmetr(26, 1007);

        Physics[] tools={
                stetoscop1, voltmetr1, stetoscop2, voltmetr2, stetoscop3, voltmetr3
        };
        Compass Compass =new Compass(tools);
        Compass.sortArraybyPrice();
        Compass.printArray();
        Compass.sortArraybyWeight();
        Compass.printArray();
        Compass.sortArraybyPriceR();
        Compass.printArray();
        Compass.sortArraybyWeightR();
        Compass.printArray();
        Compass.findUsingEnhancedForLoop(1007);
    }
}

