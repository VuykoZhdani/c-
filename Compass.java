package ua.lviv.iot;
import java.util.Comparator;
import java.util.Arrays;

public class Compass {
    Physics[] tools;
    public Compass(Physics[] tools){
        this.tools=tools;
    }

    public Physics[] gettools() {
        return tools;
    }

    Comparator WeightComparator = Comparator.comparing(Physics::getWeight);
    Comparator PriceComparator = Comparator.comparing(Physics::getPrice);
    public Physics[] sortArraybyWeight(){
        Arrays.sort(gettools(), WeightComparator);
        return tools;
    }
    public Physics[] sortArraybyPrice(){
        Arrays.sort(gettools(), PriceComparator);
        return tools;
    }
    public Physics[] sortArraybyWeightR(){
        Arrays.sort(gettools(), WeightComparator.reversed());
        return tools;
    }
    public Physics[] sortArraybyPriceR(){
        Arrays.sort(gettools(), PriceComparator.reversed());
        return tools;
    }
    public Physics findUsingEnhancedForLoop(double toFind ) {
        for (Physics physics : gettools()) {
            if (physics.getWeight() == toFind) {
                System.out.println(physics.toString());
            }
            return null;
        }
        return null;
    }
    public void printArray(){
        for (int i = 0; i < gettools().length; i++) {
            System.out.println(gettools()[i].toString());
        }
        System.out.println();
    }
}
