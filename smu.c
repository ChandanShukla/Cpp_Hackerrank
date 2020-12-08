#include <stdio.h>
#include <conio.h>
/* program to calculate the profit/loss of N products based on their purchase costs,selling prices and monthly sales*/

int main()
{
    int i,j,N;
    //taking the inputs from the user
    printf("Enter the number of products: "); 
    scanf("%d",&N);
    char names[N][20];
    int purchases[N],sales[N],index[N];
    float np,npc=0,nps=0,p_cost[N],sp[N],porl[N],porlp[N],tmp[N],tmp1[N],tot_pur[N],tot_sales[N];
    for(i=0;i<N;i++){
        printf("\nEnter the name of the product: ");
        scanf(" %[^\n]s",names[i]);
        printf("Enter the number of %s purchased: ",names[i]);
        scanf("%d",&purchases[i]);
        printf("Enter the number of %s sold: ",names[i]);
        scanf("%d",&sales[i]);
        printf("Enter the cost of each %s: ",names[i]);
        scanf("%f",&p_cost[i]);
        printf("Enter the selling price of each %s: ",names[i]);
        scanf("%f",&sp[i]);
        tot_pur[i]=p_cost[i]*purchases[i];              //calculating total purchases
        tot_sales[i]=sp[i]*sales[i];                    //calculating total sales
        porl[i]=tot_sales[i]-tot_pur[i];                // calculating profit or loss
        porlp[i]=(porl[i]/tot_pur[i])*100;              // calculating profit or loss percentage
        npc=npc+tot_pur[i];                            // calculating net purchase cost
        nps=nps+tot_sales[i];                          // calculating net purchase sales
    }
    np=((nps-npc)/npc)*100;                             // calculating net profit percentage
    for(i=0;i<N;i++){
        tmp[i]=porlp[i];
        tmp1[i]=porlp[i];
    }
    for (int i = 0; i < N; i++)                     // descending order for profit and loss
	{
		for (int j = 0; j < N; j++)           
		{
			if (tmp[j] < tmp[i])              
			{
				float temp_var = tmp[i];         
				tmp[i] = tmp[j];            
				tmp[j] = temp_var;            
			}
		}
	}
    for(i = 0; i < N; i++)                          //storing the indices
    {
        for(j=0; j<N; j++)
        {
            if(tmp[i] == tmp1[j])
            {
                index[i]=j;
            }
        }
    }
	//printing the table of profit,loss,breakeven
    printf("\nName \t    |#Purchases  |#Sales |     Cost\t      |Selling Price  |Total purchase |    Total Sales |  P/L%% \t\t|Profit/Loss/Break-even|");
    printf("\n---------------------------------------------------------------------------------------------------------------------------------------------");
    for(i=0;i<N;i++){
	    printf("\n %-15s %-10d %-10d $%-15.2f $%-15.2f $%-15.2f $%-15.2f %-6.2f%% \t\t ",names[index[i]],purchases[index[i]],sales[index[i]],p_cost[index[i]],sp[index[i]],tot_pur[index[i]],tot_sales[index[i]],porlp[index[i]]);
	    if (porlp[index[i]]>0){
            printf("PROFIT");
        }
        else if(porlp[index[i]]==0){
            printf("BREAK-EVEN");
        }
        else if(porlp[index[i]]<0){
            printf("LOSS");
        }
	}
	//printing net profit,loss,breakeven
	printf("\n ---------------------------------------------------------------------------------------------------------------------------------------------");
	printf(" \nNet Profit/Loss                                                          $%-15.2f $%-15.2f %-6.2f%% \t\t ",npc,nps,np);
    if(np>0){
        printf("Profit\n");
    }
    else if(np==0){
            printf("BREAK-EVEN\n");
        }
        else if(np<0){
            printf("LOSS\n");
        }
	return 10;
    getch();
    
}
