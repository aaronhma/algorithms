# Kaggle

## Kaggle concepts

- kernels: short scripts that explore a concept, showcase a technique, or even share a solution.

When you start a competition or when you hit a plateau, reviewing popular kernels can spar


## How to win kaggle competitions

There are only two Machine Learning approaches that win competitions: Handcrafted & Neural Networks.

For most competitions it’s pretty obvious. If you have lots of structured data, the handcrafted approach is your best bet, and it you have unusual or unstructured data your efforts are best spent on neural networks.

1. Handcrafted feature engineering

This approach works best if you already have an intuition as to what’s in the data. Cookbook for winning competitions on Structured Data:

  - Take the data, plot histograms, explore the data/analysis, data cleaning
  - create and select features: generating features and testing which ones really do correlate with the target variable
  - parameter tuning and ensembling

The most important data-related factor is how you prepare the data, and what features you engineer. You really just have to use intuition and common sense, figure out what works, and throw out what doesn’t. What really helps in this is creating a good cross validation framework so you can get a reliable error estimate.

For example, a chain of used car dealers wanted to predict which cars sold at a second-hand auction would be good buys and which ones would be lemons (irreversible mechanical problem). After much trial and error, by many different applicants, it turned out that one of the most predictive features was the car color. By grouping standard color cars and unreliable colored cars, they found that unusual colored cars were more likely to be reliable.

**Popular algorithms of winning Kaggle**

  - ensembles of decision trees
  - [random forest](https://en.wikipedia.org/wiki/Random_forest)

2. Neural Networks and Deep Learning (model architect design)

For any dataset that contains computer vision or speech problems, deep learning is the way to go (training algorithms).


### Steps to solve a problem?

- **Understand the data** - After you download the data, start exploring features. Look at data types. Check variable classes. Create some univariate - bivariate plots to understand the nature of variables.

- **Understand the metric to optimise** - Every problem comes with a unique evaluation metric. It's imperative for you to understand it, specially how does it change with target variable.

- **Decide cross validation strategy** - To avoid overfitting, make sure you've set up a cross validation strategy in early stages. A nice CV strategy will help you get reliable score on leaderboard.

- **Start hyper parameter tuning** - Once CV is at place, try improving model's accuracy using hyper parameter tuning. It further includes the following steps:

  - **Data transformations:** It involve steps like scaling, removing outliers, treating null values, transform categorical variables, do feature selections, create interactions etc.

  - **Choosing algorithms and tuning their hyper parameters:** Try multiple algorithms to understand how model performance changes.

  - **Saving results:** From all the models trained above, make sure you save their predictions. They will be useful for ensembling.

  - **Combining models:** At last, ensemble the models, possibly on multiple levels. Make sure the models are correlated for best results.


### Tips

- Kaggle Kernels are the best resource for learning, as people share tons of analysis and solutions to all the competitions.

- The most important thing is just to experiment for yourself and try to improve the score


### Other factors

1. Be persistent. The number one factor that leads to success in Kaggle competitions is persistence. You should absolutely be reading as much relevant literature (and blog posts, etc), as you can while the competition is running.

2. Domain specific knowledge. Because feature engineering is very problem-specific domain knowledge helps a lot and learn while you are competing.

3. Understand the problem

4. Discipline

5. Try problem-specific things or new approaches

6. The right tools

7. Ensembling




## [Beginner's guide to Kaggle](https://elitedatascience.com/beginner-kaggle)

### difference between Kaggle competitions and "typical" data science

- Kaggle competitions

By nature, competitions (with prize pools) must meet several criteria.

**Problems must be difficult.** Competitions shouldn't be solvable in a single afternoon. To get the best return on investment, host companies will submit their biggest, hairiest problems.

**Solutions must be new.** To win the latest competitions, you'll usually need to perform extended research, customize algorithms, train advanced models, etc.

**Performance must be relative.** Competitions must crown a winner, so your solution will be scored against others'. Kaggle competitions encourage you to squeeze out every last drop of performance, while typical data science encourages efficiency and maximizing business impact.

- "Typical" data science

In contrast, day-to-day data science doesn't need to meet those same criteria.

**Problems can be easy.** In fact, data scientists should try to identify low-hanging fruit: impactful projects that can be solved quickly.

**Solutions can be mature.** Most common tasks (e.g. exploratory analysis, data cleaning, A/B testing, classic algorithms) already have proven frameworks. There's need to reinvent the wheel.

**Performance can be absolute.** A solution can be very valuable even if it simply beats a previous benchmark.


## Kaggle Slack Community

[Kaggle Noobs](https://kagglenoobs.slack.com/join/shared_invite/enQtMzQyMjk1MzE4NTYwLTI3NGJmMDFmM2MxNjRhYWUzZmQxMTE2YTM1MWZiMTg0Njc1N2QzM2UwYWZmNjhhMGE5M2RhYjZmMWY4MzA1N2Y)


## List of Kaggle Winning Solutions and Ideas

[The Most Comprehensive List of Kaggle Solutions and Ideas](https://farid.one/kaggle-solutions/)
[Kaggle Past Solutions](http://ndres.me/kaggle-past-solutions/) && [Github repo](https://github.com/EliotAndres/kaggle-past-solutions)
[Winning solutions of kaggle competitions](https://www.kaggle.com/sudalairajkumar/winning-solutions-of-kaggle-competitions/notebook)
[Data Science Competitions](https://github.com/interviewBubble/Data-Science-Competitions)


## Kaggle Blogs

[Official blogs](https://medium.com/kaggle-blog)


## Kaggle Tutorial

[Kaggle House Prices Competition](https://www.dataquest.io/blog/kaggle-getting-started/)



## Kaggle Awesome Kernel (To learn)

[Data Science for Good: City of Los Angeles](https://www.kaggle.com/c/data-science-for-good-city-of-los-angeles/discussion/98155)



## How to solve Kaggle problem

### General process of competition

1. Exploratory Data Analysis (EDA)

2. Feature engineers

3. Model architecture

4. Split data into training and test data

Time series based machine learning problem.

1. Rule based model
2. Regression modeling
3. trend model  ex: https://research.fb.com/blog/2017/02/prophet-forecasting-at-scale/
4. Machine Learning model
5. Deep learning model
