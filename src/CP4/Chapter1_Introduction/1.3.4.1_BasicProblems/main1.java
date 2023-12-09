// 	1. Using Java, read in a double
// 	(e.g., 1.4732, 15.324547327, etc.)
// 	echo it, but with a minimum field width of 7 and 3 digits after the decimal point
// 	(e.g., ss1.473 (where ‘s’ denotes a space), s15.325, etc.)

public class main1 {
	public static void main(String[] args) {
		String x = args[0];
		String[] parts = x.split("[.]");
		String left = parts[0];
		int esess = 3 - left.length();
		esess = esess < 0 ? 0 : esess;
		String right = parts[1];
		System.out.println("s".repeat(esess) + left + "." + right.substring(0, 3));

	}
}