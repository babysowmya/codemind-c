class Series{
    public static void main(String[] args) {
        String[][] seriesList = {{"professor","tokyo","rio"},
                                 {"harry","ron","hermonie"},
                                 {"bhairava","bujji","yaskin"}};
        for(String[] eachSeries: seriesList){
            for(String eachCharacter: eachSeries)
            System.out.println(eachCharacter);

        }
        int[][]  marks= {{40,50}, {60,70}, {34,46}, {9,26}};
        for(int[] eachStudent: marks){
            for(int eachSubject: eachStudent){
            System.out.println(eachSubject);
        }
    }
    }
}
