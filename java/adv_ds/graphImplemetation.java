public abstract class Graph{
   private int noVertices;
   private int noEdges;

   public Graph(){
   	 noVertices = 0;
   	 noEdges = 0;
   }
   public Graph(int noVertices, int noEdges){
   	this.noVertices = noVertices;
   	this.noEdges = noEdges;
   }

   public int getNumVertices(){
   	return noVertices;
   }
   public int getNumEdges(){
   	 return noEdges;
   }

   
}

class graphImplementation{


	public static void main(String [] args){
		System.out.println("This is the first Graph Implementation");
	}
}