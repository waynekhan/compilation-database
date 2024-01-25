# README

```text
brew install cmake

PROJECT_KEY=$(basename "`pwd`") && \
  rm -f compilation-database CMakeCache.txt && \
  cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 && \
  make && \
  PROJECT_KEY=$(basename "`pwd`") && \
  sonar-scanner \
    -Dsonar.host.url=$SONAR_HOST_URL \
    -Dsonar.projectKey=$PROJECT_KEY \
    -Dsonar.cfamily.compile-commands=compile_commands.json \
  -X
```
