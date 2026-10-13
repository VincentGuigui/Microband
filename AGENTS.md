# Agent instructions

## Versioning

- Never bump the app version (`versionName` / `versionCode` in `app/build.gradle.kts`) without first asking the maintainer to confirm the exact increment (patch, minor or major) and the resulting number.
- Pushing to `main` triggers `.github/workflows/release.yml`, which builds, tags `v<versionName>` and publishes a release when that tag does not exist yet. Do not create the tag by hand: an existing tag makes the workflow skip the build.
