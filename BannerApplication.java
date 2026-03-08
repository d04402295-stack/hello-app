import java.util.HashMap;
import java.util.Map;

public class BannerApplication {

    static class CharacterPattern {

        private char character;
        private String[] pattern;

        public CharacterPattern(char character, String[] pattern) {
            this.character = character;
            this.pattern = pattern;
        }

        public char getCharacter() {
            return character;
        }

        public String[] getPattern() {
            return pattern;
        }
    }

    private static Map<Character, CharacterPattern> patternMap = new HashMap<>();

    public static void main(String[] args) {

        initializePatterns();

        String word = "OOPS";
        printBanner(word);
    }

    private static void initializePatterns() {

        patternMap.put('O', new CharacterPattern('O', new String[]{
                " *** ",
                "*   *",
                "*   *",
                "*   *",
                " *** "
        }));

        patternMap.put('P', new CharacterPattern('P', new String[]{
                "**** ",
                "*   *",
                "**** ",
                "*    ",
                "*    "
        }));

        patternMap.put('S', new CharacterPattern('S', new String[]{
                " ****",
                "*    ",
                " *** ",
                "    *",
                "**** "
        }));
    }

    private static void printBanner(String word) {

        int height = 5;

        for (int row = 0; row < height; row++) {

            StringBuilder line = new StringBuilder();

            for (char ch : word.toCharArray()) {

                CharacterPattern cp = patternMap.get(ch);

                if (cp != null) {
                    line.append(cp.getPattern()[row]).append("  ");
                }
            }

            System.out.println(line);
        }
    }
}

