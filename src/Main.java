import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static int[] arr;
    public static boolean[] visit;
    public static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        //N = 1부터 N까지 , M = 중복없는 숫자 갯수
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());  //지정한 구분자로 문자열을 쪼개어준다.

        int N = Integer.parseInt(st.nextToken()); //토큰 분리해서 N입력
        int M = Integer.parseInt(st.nextToken()); //토큰 분리해서 N입력

        arr = new int[M];  //M의 크기만큼 arr배열생성
        visit = new boolean[N]; //N의 크기만큼 visit배열생성
        dfs(N, M, 0);
        System.out.println(sb);
    }

    public static void dfs(int N, int M, int depth){
        if(depth == M){
            for(int val : arr){   //만약 depth가 
                sb.append(val).append(' ');
            }
            sb.append('\n');
            return;
        }
        for(int i=0;i<N;i++){
            if(!visit[i]){
                visit[i] = true;
                arr[depth] = i+1;
                dfs(N, M,depth + 1);
                visit[i] = false;
            }
        }
    }
}
