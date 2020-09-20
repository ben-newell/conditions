#!/usr/bin/env bash
echo $(dscl . -read /Groups/admin GroupMembership)
