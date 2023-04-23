# Multiple linear regression

In this type of the model, we have multiple features such that
$$
f_{wb}(x) = w_1x + w_2x + w_3x + w_4x +.....+w_nx + b
$$
where `n` is the number of features in the dataset. 

Equivalently, the hypothesis function for the multiple linear regression is
$$
f_{wb}(x) = W \cdot X + b
$$
where X is the design matrix of the features and W is the vector of weight parameters and b is the intercept

### Vectorization

To implement the model we can use the dot product of W and X such that

```python
f = numpy.dot(W, X) + b
```

This is much more practical when n is large and more efficient than the for loop or sequential calculation of the model because the numpy dot function uses **parallel hardware** to compute the dot product of the vectors.

Parallel hardware: the computer gets all the values in the two vectors and computes the products at the same time and sums all the resulting numbers at the same time. This makes it much more efficient, especially for a large n

### Gradient descent for multiple linear regression

Below is the gradient descent for when we had only one feature:
$$
w = w - \alpha * \frac{\partial J(w,b)}{\partial w} = w - \alpha * \frac{1}{m} \sum_{i=1}^{m} (\hat{y}^{(i)} - y^{(i)})x^{(i)} \\

b = b - \alpha * \frac{\partial J(w,b)}{\partial b} = b - \alpha * \frac{1}{m} \sum_{i=1}^{m} (\hat{y}^{(i)} - y^{(i)})
$$
where w and b are simultaneously updated to find the values that will result in a model that best fits the data. Since for the multiple linear regression we do have multiple features, we will have `n` number of equations to update, where n is the number of features. 
$$
w_j = w - \alpha * w - \alpha * \frac{1}{m} \sum_{i=1}^{m} (\hat{y}^{(i)} - y^{(i)})x^{(i)}_j \\
\text{for j = 1, 2, 3, 4, ..., n}
\\b = b - \alpha * \frac{\partial J(w,b)}{\partial b}
$$

Like before, this algorithm is updates the parameter simultaneously after taking into account the learning rate until convergence