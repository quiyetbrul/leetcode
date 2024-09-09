<h2><a href="https://neetcode.io/problems/meeting-schedule-ii">253. Meeting Schedule II</a></h2><h3>Medium</h3><hr>

<p>Given an array of meeting time interval objects consisting of start and end times <code>[[start_1,end_1],[start_2,end_2],...] (start_i < end_i)</code>, find the minimum number of days required to schedule all meetings without any conflicts.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> intervals = [(0,40),(5,10),(15,20)]
<strong>Output:</strong> 2
<strong>Explanation: </strong>
day1: (0,40)
day2: (5,10),(15,20)
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> intervals = [(4,9)]
<strong>Output:</strong> 1
<strong>Explanation: </strong>
day1: (0,40)
day2: (5,10),(15,20)
</pre>

<p><strong class="example">Note:</strong></p>
<ul>
<li><code>(0,8),(8,10) is not considered a conflict at 8</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
 <li><code>0 <= intervals.length <= 500</code></li>
 <li><code>0 <= intervals[i].start < intervals[i].end <= 1,000,000</code></li>
</ul>
