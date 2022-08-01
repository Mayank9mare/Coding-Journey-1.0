 # **Meet in the Middle**

 ## Meet in the Middle

 You are given an array of n numbers. In how many ways can you choose a subset of the numbers with sum x?

<math xmlns="http://www.w3.org/1998/Math/MathML">
  <mn>1</mn>
  <mo>&#x2264;<!-- ≤ --></mo>
  <mi>n</mi>
  <mo>&#x2264;<!-- ≤ --></mo>
  <mn>40</mn>
</math

Divide into two part then brute force and then use set to find if sum exists or not

## String problem

You are given two string S and T of length N. Figure out if we can get string T starting from string S and applyling 4 susbstring reverse algorithms

Apply two substring reverse on s and add to set and the apply two on t and add to set

```c

for(int l1=0;l1<n;l1++){
    for(int r1=l1;r1<n;r1++){
        for(int l2=0;l2<n;l2++)
            for(int r2=l2;r2<n;r2++)
            string temp=s;
            reverse(temp.begin()+l1,temp.begin()+r1+1);
            reverse(temp.begin()+l2,temp.begin()+r2+1);
            add to set
    }
}

```

## Graph problem

Find minimum vertex cover when n<=30 and m<=40
<img src="https://raw.githubusercontent.com/Mayank9mare/ImagesForMarkdown/main/mim2.png">

<img src="https://raw.githubusercontent.com/Mayank9mare/ImagesForMarkdown/main/mim1.png">
