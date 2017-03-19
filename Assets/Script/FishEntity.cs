using System;
using System.Collections.Generic;
namespace AssemblyCSharp
{
	[System.Serializable]
	public class FishEntity
	{
		public static int FISH_1 = 1;
		public static int FISH_2 = 2;
		public static int FISH_3 = 3;
		public static int FISH_4 = 4;
		public static int FISH_5 = 5;



		public float size = 0.1f;
		public float maxSize = 0.5f;
		public float food = 50f;
		public float maxFood = 100f;
		public float health = 50f;
		public float maxHealth = 100f;
		public int id;
		public int fishType;
		public static FishEntity getDefaultFish(int id, int type){
			FishEntity entity = new FishEntity ();
			entity.id = id;
			entity.fishType = type;
			return entity;

		}
		public FishEntity ()
		{
			
		}
	}
	[System.Serializable]
	public class FishList{
		public FishEntity[] fishes;
	}


}

