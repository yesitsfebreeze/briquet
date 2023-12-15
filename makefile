PHONY: sync
sync:
	@git pull
	@git add --all
	@git commit -m "update"
	@git push
