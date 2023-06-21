<h2><a href="https://leetcode.com/problems/minimum-cost-to-make-array-equal/"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">2448. Minimum Cost </font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">to </font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Make Array Equal</font></font></a></h2><h3>Hard</h3><hr><div><p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">You are given two </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">0-indexed</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> arrays </font></font><code>nums</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">and </font></font><code>cost</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">consisting of each of </font></font><code>n</code> <strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">positive</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> integers.</font></font></p>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">You can do the following operation </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">any</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> number of times:</font></font></p>

<ul>
	<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Increase or decrease </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">any</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> element of the array </font></font><code>nums</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">by </font></font><code>1</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">.</font></font></li>
</ul>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">The cost of doing one operation on the </font><font style="vertical-align: inherit;">element is </font><font style="vertical-align: inherit;">.</font></font><code>i<sup>th</sup></code><font style="vertical-align: inherit;"></font><code>cost[i]</code><font style="vertical-align: inherit;"></font></p>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Return </font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">the </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">minimum</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> total cost such that all the elements of the array </font></font></em><code>nums</code><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">become </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">equal</font></font></strong></em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> .</font></font></p>

<p>&nbsp;</p>
<p><strong class="example"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Example 1:</font></font></strong></p>

<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Input:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> nums = [1,3,5,2], cost = [2,3,1,14]
 </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Output:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> 8
 </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Explanation:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> We can make all the elements equal to 2 in the following way:</font></font><font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">
- Increase the 0 </font></font><sup><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">th</font></font></sup><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> element one time. The cost is 2.</font></font><font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">
- Decrease the 1 </font></font><sup><span style="font-size: 10.8333px;"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">st</font></font></span></sup><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> element one time. The cost is 3.</font></font><font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">
- Decrease the 2nd </font></font><sup><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">element</font></font></sup><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> three times. The cost is 1 + 1 + 1 = 3.</font></font><font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">
The total cost is 2 + 3 + 3 = 8.</font></font><font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">
It can be shown that we cannot make the array equal with a smaller cost.</font></font><font></font>
</pre>

<p><strong class="example"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Example 2:</font></font></strong></p>

<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Input:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> nums = [2,2,2,2,2], cost = [4,2,8,1,3]
 </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Output:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> 0
 </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Explanation:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> All the elements are already equal, so no operations are needed.
</font></font></pre>

<p>&nbsp;</p>
<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Constraints:</font></font></strong></p>

<ul>
	<li><code>n == nums.length == cost.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i], cost[i] &lt;= 10<sup>6</sup></code></li>
</ul>
</div>