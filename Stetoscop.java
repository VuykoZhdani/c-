package ua.lviv.iot;

public class Stetoscop extends Physics {
    private static String Name = "Stetoscop";
    private final int Price;
    private double Weight;

    public Stetoscop(int Price, double Weight) {
        this.Price = Price;
        this.Weight = Weight;
        this.Name = Name;
    }

    @Override
    public String getName() {
        return Name;
    }

    @Override
    public int getPrice() {
        return Price;
    }

    @Override
    public double getWeight() {
        return Weight;
    }

    @Override
    public String toString() {
        return "equipment{"+Price+" "+Weight+"}";

    }
}
