### Check the version of the default C++ standard

```
g++ -dM -E -x c++ /dev/null | grep -F __cplusplus
```

### Modify the standard that is being used

```
g++ -std=c++23
```
