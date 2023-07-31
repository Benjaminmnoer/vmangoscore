pipeline {
    agent {
        docker {
            image 'benjaminmnoer/basebuild:latest'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'uname -a'
            }
        }
    }
}