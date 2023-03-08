class Solution {
    public int[] twoSum(int[] nums, int target) {
 
         
        
        int [] res=new int[2];
        for (int i=1;i<nums.length;i++){
          int sum=0;
            for(int j=0;j<i;j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    res[1]=i;
                    res[0]=j;
                    return res;
                   }
                    
}
}return res;
     }

}
