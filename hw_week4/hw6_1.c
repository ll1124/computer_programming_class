printf("%d --> %d\n", a, c ); // a -> b
printf("%d --> %d\n", a, b );
printf("%d --> %d\n", c, b );
printf("%d --> %d\n", a, c );

printf("%d --> %d\n",stack1, stack3 ); // 1 -> 2
printf("%d --> %d\n",stack1, stack2 );
printf("%d --> %d\n",stack3, stack2 );
printf("%d --> %d\n",stack1, stack3 );

printf("%d --> %d\n",stack1, stack2 ); // 1 -> 3
printf("%d --> %d\n",stack1, stack3 );
printf("%d --> %d\n",stack2, stack3 );
printf("%d --> %d\n",stack1, stack2 );

printf("%d --> %d\n",stack2, stack3 ); // 2 -> 1
printf("%d --> %d\n",stack2, stack1 );
printf("%d --> %d\n",stack3, stack1 );
printf("%d --> %d\n",stack2, stack3 );

printf("%d --> %d\n",stack2, stack1 ); // 2 -> 3
printf("%d --> %d\n",stack2, stack3 );
printf("%d --> %d\n",stack1, stack3 );
printf("%d --> %d\n",stack2, stack1 );

printf("%d --> %d\n",stack3, stack2 ); // 3 -> 1
printf("%d --> %d\n",stack3, stack1 );
printf("%d --> %d\n",stack2, stack1 );
printf("%d --> %d\n",stack3, stack2 );

printf("%d --> %d\n",stack3, stack1 ); // 3 -> 2
printf("%d --> %d\n",stack3, stack2 );
printf("%d --> %d\n",stack1, stack2 );
printf("%d --> %d\n",stack3, stack1 );
