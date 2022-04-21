class pra0<t>{
    t m[];
    pra0(t m[]){
        this.m=m;
    }
    public void print(){
        //t i;
        for (int i=0;i<m.length;i++){
            System.out.println(m[i]);
        }
    }
}

class pra3{
    public static void main(String args[]){
        Integer m[]={1,2,3,4};
        pra0<Integer> b=new pra0<Integer>(m);
        b.print();
    }
}