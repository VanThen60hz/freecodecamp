package intro_to_java_programming;

public enum Level {
    LOW(1),
    MEDIUM(2),
    HIGH(3);

    private int levelCode;

    private Level(int num){
        this.levelCode = num;
    }

    public int getLevelCode() {
        return levelCode;
    }

    public void setLevelCode(int levelCode) {
        this.levelCode = levelCode;
    }
}
