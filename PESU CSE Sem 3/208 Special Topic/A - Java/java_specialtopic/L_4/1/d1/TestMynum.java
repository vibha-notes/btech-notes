class Mynum
{
  private int val;
  private Mynum ref;

  public Mynum(){val=111;ref=null;}
  public Mynum(int v){val=v;ref=new Mynum(34);}
  public void disp(){ System.out.println(val+" "+ref.val);
}
}

class TestMynum
{
 public static void main(String[] args){
  Mynum m=new Mynum(23);
  m.disp();
}
}
