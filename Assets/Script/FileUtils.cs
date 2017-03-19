using System;
using System.IO;
using UnityEngine;
namespace AssemblyCSharp
{
	public class FileUtils
	{
		public static FishList readFishList(){
			FishList fishList = new FishList ();
			String gamedata = PlayerPrefs.GetString("gamedata");
			if (gamedata == null || gamedata.Equals ("")) {
				fishList.fishes = new FishEntity[2];
				fishList.fishes [0] = FishEntity.getDefaultFish (0, FishEntity.FISH_1);
				fishList.fishes [1] = FishEntity.getDefaultFish (1, FishEntity.FISH_2);

				gamedata = JsonUtility.ToJson (fishList);
				PlayerPrefs.SetString ("gamedata", gamedata);
				PlayerPrefs.Save ();
			} else {
				fishList = JsonUtility.FromJson<FishList> (gamedata);	
			}
			return fishList;
		}
	}
}

