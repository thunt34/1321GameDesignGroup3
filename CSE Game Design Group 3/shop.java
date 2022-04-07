public class shop {

    private int shopInput;
    private int[] shopPrice = new int[6];
    void shopMenu () {
        System.out.println("Welcome to the Shop of " + /*newChar.getRegion()*/ "" + ". What would you like to buy today?" );
        System.out.println("HP: newChar.getHealth() | Wallet: newChar.getWallet()");
        System.out.println("\n[1] Upgrade Sword [" + /*current level sword*/"" + "/(max level)] $price || Description");
        System.out.println("[2] Upgrade Armor [" + /*current level armor*/"" + "/(max level)] $price || Description");
        System.out.println("[3] Buy Heal Potion $price || Description");
        System.out.println("[4] Buy X Potion $price || Description");
        System.out.println("[5] Exit");
        /*shopInput = scan user's input.*/

        if (shopInput == 1) {
            /*buy sword, subtract amount, newChar.overwite(atkindex, (atkindex+1) & newChar.overwite(1, (1-price)*/
            System.out.println("Your sword has increased from level x to y!");
            System.out.println("\nThank you for your purchase!");
            shopMenu();
        }
        else if (shopInput == 2) {
            /*buy armor, subtract amount, newChar.overwite(defindex, (defindex+1) & newChar.overwite(1, (1-price)*/
            System.out.println("Your armor has increased from level x to y!");
            System.out.println("\nThank you for your purchase!");
            shopMenu();
        }
        else if (shopInput == 3) {
            /*newChar.overwite(hpIndex, hpIndex + x) & newChar.overwite(1, (1-price)*/
            System.out.println("Your health has increased from x to y!");
            System.out.println("\nThank you for your purchase!");
            shopMenu();
        }
        else if (shopInput == 4) {
            /*newChar.overwite(hpIndex, hpIndex + x) & newChar.overwite(1, (1-price)*/
            System.out.println("Your health has increased from x to y!");
            System.out.println("\nThank you for your purchase!");
            shopMenu();
        }
        else if (shopInput == 5) {
            System.out.println("Thank you for visiting! We wish you the best with your explorations!");
        }

    }
}
