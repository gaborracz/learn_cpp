### Check the version of the default C++ standard

$()$(
  sh
  g++ -dM -E -x c++ /dev/null | grep -F __cplusplus
)$()
