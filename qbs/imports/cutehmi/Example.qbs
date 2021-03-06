import qbs
import qbs.FileInfo

import "CommonProduct.qbs" as CommonProduct

CommonProduct {
	type: "dynamiclibrary"

	baseName: name

	property string installDir: FileInfo.relativePath(path + "/../../..", sourceDirectory)

	FileTagger {
		patterns: "*.qml"
		fileTags: ["qml"]
	}

	FileTagger {
		patterns: "*.js"
		fileTags: ["js"]
	}

	FileTagger {
		patterns: "*.xml"
		fileTags: ["xml"]
	}

	FileTagger {
		patterns: "*.png"
		fileTags: ["png"]
	}

	FileTagger {
		patterns: "*.svg"
		fileTags: ["svg"]
	}

	Group {
		name: "Project files"
		fileTagsFilter: ["qml", "js", "xml", "png", "svg"]
		qbs.install: true
		qbs.installSourceBase: sourceDirectory
		qbs.installDir: installDir
	}
}
