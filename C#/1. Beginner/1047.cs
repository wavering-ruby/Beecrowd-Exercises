using System; 

class URI {
    static void Main(string[] args) { 
        string[] v = Console.ReadLine().Split(' ');
        int HI = int.Parse(v[0]);
        int MI = int.Parse(v[1]);
        int HF = int.Parse(v[2]);
        int MF = int.Parse(v[3]);
        int H;
        int M;
        
        if(HI == HF && MI == MF){
            H = 24;
            M = 0;
        } else {
            int I = (HI * 60) + MI;
            int E = (HF * 60) + MF;
            int D;
        
            if(E> I){
                D = E - I;
            } else {
                D=(1440 - I) + E;
            }
            
            H = D / 60;
            M = D % 60;
        }
        
        Console.WriteLine($"O JOGO DUROU {H} HORA(S) E {M} MINUTO(S)");
    }
}