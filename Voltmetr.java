package ua.lviv.iot;

public class Voltmetr extends Physics {
    private  String Name = "Voltmetr";
    private int Price;
    private double Weight;

    public Voltmetr(int Price, double Weight) {
        this.Price = Price;
        this.Weight = Weight;
    }
    @Override
    public String toString() {
        return "equipment{"+Price+" "+Weight+"}";

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
    public String getName(){return Name;}
}
